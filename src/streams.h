/*  libbsa

    A library for reading and writing BSA files.

    Copyright (C) 2012-2013    WrinklyNinja

    This file is part of libbsa.

    libbsa is free software: you can redistribute
    it and/or modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    libbsa is distributed in the hope that it will
    be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with libbsa.  If not, see
    <http://www.gnu.org/licenses/>.
*/

#ifndef __LIBBSA_STREAMS_H__
#define __LIBBSA_STREAMS_H__

#include <boost/iostreams/stream.hpp>
#include <boost/iostreams/device/file_descriptor.hpp>

namespace libbsa {
    typedef boost::iostreams::stream< boost::iostreams::file_descriptor_sink > ofstream;
    typedef boost::iostreams::stream< boost::iostreams::file_descriptor_source > ifstream;
    typedef boost::iostreams::stream< boost::iostreams::file_descriptor > fstream;
}

#endif
