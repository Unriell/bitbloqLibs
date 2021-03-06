/*
 * BitbloqIRControl.h
 * 
 * Copyright 2017 Alberto Valero <avalero.valero@bq.com>
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
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
 
#ifndef BITBLOQIRCONTROL_H
#define BITBLOQIRCONTROL_H
 
#include "IRremoteInt.h"
#include "IRremote.h" 

namespace Bitbloq{

class IRControl{
public:
    IRControl(int rpin);
    //char getInfraredControlCommand();
    long int getRaw();
    void setup();
    
protected:
    const int receiverPin;
    int _InfraredReceiveCount;
    Bitbloq::DecodeResults _InfraredControlCommand;
    long int _InfraredControlCommand1;
    long int _InfraredControlCommand2;
 };
 
} //end namespace

#endif
