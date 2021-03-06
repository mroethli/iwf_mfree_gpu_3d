//Copyright ETH Zurich, IWF

//This file is part of iwf_mfree_gpu_3d.

//iwf_mfree_gpu_3d is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//iwf_mfree_gpu_3d is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

//You should have received a copy of the GNU General Public License
//along with mfree_iwf.  If not, see <http://www.gnu.org/licenses/>.

// quick and dirty class to read initial positions from a resulting *.vtk file
// this is used for some of the multi-grain simulations (i.e. with de-stressed, cooled) workpieve
//		as with all other reader classes there is no error handling, no protection against malformed files etc.

#ifndef VTK_READER_H_
#define VTK_READER_H_

#include <cstdio>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <iterator>

#include <glm/glm.hpp>

#include "types.h"

std::vector<float4_t> vtk_read_init_pos(std::string filename);

#endif /* VTK_READER_H_ */
