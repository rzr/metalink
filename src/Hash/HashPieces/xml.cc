/*
	This file is part of the metalink program
	Copyright (C) 2008  A. Bram Neijt <bneijt@gmail.com>

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/




#include "HashPieces.ih"
std::string HashPieces::xml() const
	{
			ostringstream ost;
			assert(d_pieces.size() > 0);
			
			ost << "<pieces length=\"" << d_size << "\" type=\"" << d_pieces[0]->name() << "\">\n";

			for(vector<Hash*>::size_type i(0);
				i < d_pieces.size();
				++i)
			{
				ost << "\t\t\t\t<hash piece=\"" << i << "\">"
 			<< d_pieces[i]->value()
 			<< "</hash>\n";
			}
			ost << "\t\t\t</pieces>";
			
			return ost.str();
	}
