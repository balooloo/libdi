/*
 * service01.hpp
 *
 * Copyright (C) 2016 - Emilien Kia
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <string>

#include "di.hpp"

class HelloService : public di::component
{
public:
	virtual void sayHello(const std::string& name)const = 0;
	virtual size_t count() = 0;
};


class TotoService : public di::component 
{
public:
	virtual void titi() = 0;
};
