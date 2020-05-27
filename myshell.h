/*
 * Marcel Kredzel - M00540191
 * Operating Systems Project 1 - Shell
 */

#ifndef MYSHELL_H_

#define MYSHELL_H_
#include "utility.c"

// change directory
// in: new directory
extern void cmd_cd(char *directory);

// clear shell
// no input/output
extern void cmd_clr(void);

// list directory contents
// in: directory to be listed
// out: contents of directory
extern void cmd_dir();

// list environment settings
// out: environment settings
extern void cmd_environ(void);

// display comment
// in: comment to be displayed
// out: comment to be displayed
extern void cmd_echo(char *comment);

// display user manual - help file
// out: user manual - help file
extern void cmd_help(char help_dir[]);

// pause shell until "Enter" is pressed
extern void cmd_pause(void);

#endif /* UTILITY_H_ */
