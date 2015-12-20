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
#include <fstream>
#include "hoap.h"
#include "Matrix.h"


using namespace std;


void qdd_diff(mc* stance, int SizeR, int SizeC, double Scalar)
{
	for (int j=0; j<SizeR; j++)
	{
		for (int i=0; i<SizeC; i++)
		{
			if (j == 0)
			{
				stance[0].qdd[i] = 0;
			}
			else
			{
				int a = j - 1;
				stance[0].qdd[j*SizeC + i] = stance[0].qd[j*SizeC + i] - stance[0].qd[a*SizeC + i];
				stance[0].qdd[j*SizeC + i] /= Scalar;
			}
		}
	}
}