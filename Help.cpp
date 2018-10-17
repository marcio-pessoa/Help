/* Help.cpp - Help Messages Management Library
 * 
 */

#include "Arduino.h"
#include "Help.h"

/* Help
 * 
 * Description
 *  Sciemon help messages builder.
 * 
 *  Help ()
 * 
 * Parameters
 *  none
 * 
 * Returns
 *  void
 */
Help::Help() {
}

/* commandAdd
 * 
 * Description
 *  Add a command to help object
 * 
 *  some_help.commandAdd()
 * 
 * Parameters
 *  command: a command name
 *  description: a description to command
 * 
 * Returns
 *  boolean
 */
bool Help::commandAdd(String command, String description) {
  _help_text += "  " + command + "\t";
  if(command.length() < 6) {
    _help_text += "\t";
  }
  _help_text += description + "\n";
  return false;
}

/* sectionAdd
 * 
 * Description
 *  Add a section to help object
 * 
 *  some_help.sectionAdd()
 * 
 * Parameters
 *  section: a section name
 * 
 * Returns
 *  boolean
 */
bool Help::sectionAdd(String section) {
  _help_text += "\n" + section;
  if (section.length() > 1) {
    _help_text += "\n";
  }
  return false;
}

/* show
 * 
 * Description
 *  Return help message
 * 
 *  some_help.show()
 * 
 * Parameters
 *  none
 * 
 * Returns
 *  String: Composed help message
 */
String Help::show() {
  return _help_text;
}
