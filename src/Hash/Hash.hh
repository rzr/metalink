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





#ifndef _Hash_HH_INCLUDED_
#define	_Hash_HH_INCLUDED_

#include <string>

namespace bneijt
{
class Hash
{
	public:
		virtual std::string name() const = 0;
		virtual void update(char const *bytes, unsigned numbytes) = 0;
		virtual void finalize() = 0;
		virtual std::string const &value() const = 0;
		virtual std::string xml() const;
		virtual ~Hash()
		{}
};
}
#endif

