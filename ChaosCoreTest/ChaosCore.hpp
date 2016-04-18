//
//  ChaosCore.hpp
//  ChaosCore
//
//  Created by Fu Lam Diep on 18.04.16.
//  Copyright © 2016 Fu Lam Diep. All rights reserved.
//

#ifndef ChaosCore_hpp
#define ChaosCore_hpp

#include <ChaosCore/ChaosCore.hpp>
#include <gtest/gtest.h>

TEST (ChaosCore, Log)
{
	chaos::info("Blabla");
	chaos::error("%s", "Fuck");
}


#endif /* ChaosCore_h */
