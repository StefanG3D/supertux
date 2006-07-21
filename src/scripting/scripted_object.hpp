//  $Id$
//
//  SuperTux
//  Copyright (C) 2006 Matthias Braun <matze@braunis.de>
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef __SCRIPTED_OBJECT_INTERFACE_H__
#define __SCRIPTED_OBJECT_INTERFACE_H__

namespace Scripting
{

class ScriptedObject
{
public:
#ifndef SCRIPTING_API
  virtual ~ScriptedObject()
  {}
#endif

  virtual void set_action(const std::string& animation) = 0;
  virtual std::string get_action() = 0;

  virtual void move(float x, float y) = 0;
  virtual void set_pos(float x, float y) = 0;
  virtual float get_pos_x() = 0;
  virtual float get_pos_y() = 0;

  virtual void set_velocity(float x, float y) = 0;
  virtual float get_velocity_x() = 0;
  virtual float get_velocity_y() = 0;

  virtual void set_visible(bool visible) = 0;
  virtual bool is_visible() = 0;

  virtual void set_solid(bool solid) = 0;
  virtual bool is_solid() = 0;

  virtual std::string get_name() = 0;
};

}

#endif
