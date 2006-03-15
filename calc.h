/*=================================================================*/
/*=   calc.h                                                      =*/
/*=   header file for calculation routines for treekin            =*/
/*=   ---------------------------------------------------------   =*/
/*=   Last changed Time-stamp: <2006-03-15 17:54:19 mtw>          =*/
/*=   $Id: calc.h,v 1.12 2006/03/15 18:04:29 mtw Exp $            =*/
/*=   ---------------------------------------------------------   =*/
/*=     (c) Michael Thomas Wolfinger, W. Andreas Svrcek-Seiler    =*/
/*=                  {mtw,svrci}@tbi.univie.ac.at                 =*/
/*=                             treekin                           =*/
/*=================================================================*/


#ifndef _CALC_H_
#define _CALC_H_
#include "barparser.h"

void    MxInit (int d);
double *MxBar2Matrix (BarData *Data, double *);
double *MxEqDistr (BarData *Data);
double *MxEqDistrFULL (SubInfo *E);
double *MxMethodeFULL(double *);
double *MxMethodeINPUT (BarData *Data, double *);
double *MxSymmetr (double *U, double *PI);
double *MxStartVec (void) ;
void    MxEVnonsymMx(double *U, double **_S);
void    MxIterate (double *p0, double *p8, double *S);
void    MxMemoryCleanUp (void);
void    MxExponent(double *p0, double *p8, double *U);
void    MxFPT(double *U, double *p8);

#endif 

/* End of file */
