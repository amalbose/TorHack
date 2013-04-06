/*************************************************************************************
 *   Created on: Apr 6, 2013
 *
 *	TorHack - http://axatrikx.com
 *	Copyright (C) 2013  Amal Bose
 *
 *	This program is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **************************************************************************************/

#ifndef SYSTEM_H_
#define SYSTEM_H_

#include <iostream>

namespace torhack {

class System {
public:
	System();

	std::string getDeviceName() const {
		return deviceName;
	}

	void setDeviceName(std::string deviceName) {
		this->deviceName = deviceName;
	}

	std::string getSysIp() const {
		return sysIP;
	}

	void setSysIp(std::string sysIp) {
		sysIP = sysIp;
	}

protected:
	std::string deviceName;

	std::string sysIP;

	System *inSystem;
	System *outSystem;
};

} /* namespace torhack */
#endif /* SYSTEM_H_ */
