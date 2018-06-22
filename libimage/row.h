/*
 * row.h
 *
 *  Created on: Jun 22, 2018
 *      Author: oy753c
 */

#ifndef LIBIMAGE_ROW_H_
#define LIBIMAGE_ROW_H_

#include "image.h"

int getrow(IMAGE *image, unsigned short *buffer, unsigned int y, unsigned int z);
int putrow(IMAGE *image, unsigned short *buffer, unsigned int y, unsigned int z);

#endif /* LIBIMAGE_ROW_H_ */
