/*
 * File: loadcell.h
 * Author: Jerico Skluzacek
 * Created: 06/11/2025
 * Brief: Header file for load cell functions
 */

#include <stdbool.h>

#ifndef LOADCELL_H
#define LOADCELL_H

#define PD_SCK_PULSES 25

int loadcell_capture(void);

#endif // LOADCELL_H
