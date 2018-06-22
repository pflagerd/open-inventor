/*
 * rdwr.h
 *
 *  Created on: Jun 22, 2018
 *      Author: oy753c
 */

#ifndef LIBIMAGE_RDWR_H_
#define LIBIMAGE_RDWR_H_

#include "image.h"

int img_badrow(IMAGE *image, unsigned int y, unsigned int z);
unsigned int img_optseek(IMAGE *image, unsigned int offset);
int img_read(IMAGE *image, char *buffer, int count);
unsigned int img_seek(IMAGE *image, unsigned int y, unsigned int z);
int img_write(IMAGE *image, char *buffer,int count);

#endif /* LIBIMAGE_RDWR_H_ */
