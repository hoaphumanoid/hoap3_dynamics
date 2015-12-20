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

#include <iostream>
#include "Matrix.h"

//using namespace std;


float* matrix::DiagOfDiag (float* A, int SizeA)
{
	float* diag = new float [SizeA*SizeA];

	for (i=0;i<SizeA;i++)
	{
		for (j=0;j<SizeA;j++)
		{
			if(i==j)
			{
				diag[i*SizeA + j] = A[i*SizeA + j];
			}
			else
			{
				diag[i*SizeA + j] = 0;
			}
		}
	}

	return diag;
}

