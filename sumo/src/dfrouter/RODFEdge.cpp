/****************************************************************************/
/// @file    RODFEdge.cpp
/// @author  Daniel Krajzewicz
/// @author  Michael Behrisch
/// @date    Thu, 16.03.2006
/// @version $Id$
///
// An edge within the DFROUTER
/****************************************************************************/
// SUMO, Simulation of Urban MObility; see http://sumo.sourceforge.net/
// Copyright (C) 2001-2012 DLR (http://www.dlr.de/) and contributors
/****************************************************************************/
//
//   This file is part of SUMO.
//   SUMO is free software: you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.
//
/****************************************************************************/


// ===========================================================================
// included modules
// ===========================================================================
#ifdef _MSC_VER
#include <windows_config.h>
#else
#include <config.h>
#endif

#include <algorithm>
#include <cassert>
#include <utils/common/MsgHandler.h>
#include "RODFEdge.h"

#ifdef CHECK_MEMORY_LEAKS
#include <foreign/nvwa/debug_new.h>
#endif // CHECK_MEMORY_LEAKS


// ===========================================================================
// method definitions
// ===========================================================================
RODFEdge::RODFEdge(const std::string& id, RONode* from, RONode* to, unsigned int index)
    : ROEdge(id, from, to, index, false) {}


RODFEdge::~RODFEdge() {}


void
RODFEdge::setFlows(const std::vector<FlowDef> &flows) {
    myFlows = flows;
}


const std::vector<FlowDef> &
RODFEdge::getFlows() const {
    return myFlows;
}


/****************************************************************************/

