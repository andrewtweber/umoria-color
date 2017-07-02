// Copyright (c) 1989-2008 James E. Wilson, Robert A. Koeneke, David J. Grabiner
//
// Umoria is free software released under a GPL v2 license and comes with
// ABSOLUTELY NO WARRANTY. See https://www.gnu.org/licenses/gpl-2.0.html
// for further details.

// Misc code for maintaining the dungeon, printing player info

#include "headers.h"
#include "externs.h"

// Add a comment to an object description. -CJS-
void scribe_object() {
    if (inventory_count == 0 && equipment_count == 0) {
        printMessage("You are not carrying anything to inscribe.");
        return;
    }

    int item_val;
    if (get_item(&item_val, "Which one? ", 0, INVEN_ARRAY_SIZE, CNIL, CNIL)) {
        obj_desc_t out_val, tmp_str;

        itemDescription(tmp_str, &inventory[item_val], true);
        (void) sprintf(out_val, "Inscribing %s", tmp_str);
        printMessage(out_val);

        if (inventory[item_val].inscrip[0] != '\0') {
            (void) sprintf(out_val, "Replace %s New inscription:", inventory[item_val].inscrip);
        } else {
            (void) strcpy(out_val, "Inscription: ");
        }

        int j = 78 - (int) strlen(tmp_str);
        if (j > 12) {
            j = 12;
        }

        putStringClearToEOL(out_val, 0, 0);

        if (getStringInput(out_val, 0, (int) strlen(out_val), j)) {
            inscribe(&inventory[item_val], out_val);
        }
    }
}

// Append an additional comment to an object description. -CJS-
void add_inscribe(Inventory_t *item, uint8_t item_ident_type) {
    item->ident |= item_ident_type;
}

// Replace any existing comment in an object description with a new one. -CJS-
void inscribe(Inventory_t *item, const char *inscription) {
    (void) strcpy(item->inscrip, inscription);
}

// We need to reset the view of things. -CJS-
void check_view() {
    Cave_t *c_ptr = &cave[char_row][char_col];

    // Check for new panel
    if (get_panel(char_row, char_col, false)) {
        prt_map();
    }

    // Move the light source
    move_light(char_row, char_col, char_row, char_col);

    // A room of light should be lit.
    if (c_ptr->fval == LIGHT_FLOOR) {
        if (py.flags.blind < 1 && !c_ptr->pl) {
            light_room(char_row, char_col);
        }
        return;
    }

    // In doorway of light-room?
    if (c_ptr->lr && py.flags.blind < 1) {
        for (int i = char_row - 1; i <= char_row + 1; i++) {
            for (int j = char_col - 1; j <= char_col + 1; j++) {
                if (cave[i][j].fval == LIGHT_FLOOR && !cave[i][j].pl) {
                    light_room(i, j);
                }
            }
        }
    }
}
