//
// Author: Miguel González-Fierro <mgpalaci@ing.uc3m.es>, (C) 2011
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
//


#ifndef		_Array_Release_H
#define		_Array_Release_H

#include "SpatialVectorArithmetic.h"
#include "PlanarVectorArithmetic.h"
#include "BranchInducedSparsity.h"
#include "Matrix.h"
#include "ModelConstructors.h"
#include "PlanarVectorDynamicsFunctions.h"

	
void svaRelease (sva model);
void pvaRelease (pva model);
void bisRelease (bis model);
void matrixRelease (matrix model);
void mcRelease (mc *model, int Size);
void mcRelease (mc model);
void pvdfRelease (pvdf model);
void pvdfRelease (pvdf* model, int Size);



#endif