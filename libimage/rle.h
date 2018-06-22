/*
 * rle.h
 *
 *  Created on: Jun 22, 2018
 *      Author: oy753c
 */

#ifndef LIBIMAGE_RLE_H_
#define LIBIMAGE_RLE_H_

#include "image.h"

int img_getrowsize(IMAGE *image);
void img_setrowsize(IMAGE *image, int cnt, int y, int z);

#endif /* LIBIMAGE_RLE_H_ */
