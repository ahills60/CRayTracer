/*
 * craytracer.h
 *
 *  Created on: 2 Dec 2013
 *      Author: andrew
 */

#ifndef CRAYTRACER_H_
#define CRAYTRACER_H_

#define	VERSION_MAJOR	0
#define	VERSION_MINOR	1
#define	VERSION_BUILD	2
#define	VERSION_DATE	"05/06/2014"

#ifdef DEBUG
    #define MAXTHREADS 1
#else
    #define MAXTHREADS 4
#endif

#endif /* CRAYTRACER_H_ */
