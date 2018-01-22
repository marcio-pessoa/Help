/* Help.h - Sciemon help messages builder
 *
 * Author: Márcio Pessoa <marcio.pessoa@sciemon.com>
 * Contributors: none
 * 
 * Change log
 * 2014-11-06
 *         Experimental version.
 */

#ifndef Help_h
#define Help_h

#include "Arduino.h"

class Help
{
  public:
    Help(void);
    bool commandAdd(String command, String description);
    bool sectionAdd(String section);
    String show();
  private:
    String _help_text;
};

#endif
