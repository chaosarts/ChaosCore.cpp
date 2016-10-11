//
//  map_func.hpp
//  ChaosCore
//
//  Created by Fu Lam Diep on 30.07.16.
//  Copyright © 2016 Fu Lam Diep. All rights reserved.
//

#ifndef ChaosCore_map_func_hpp
#define ChaosCore_map_func_hpp

#include <map>

namespace chaos
{
	template<typename Key, typename Value>
	Key* map_keys (std::map<Key, Value> m)
	{
		Key* output = (Key*) malloc(sizeof(Key) * m.size());
		typename std::map<Key, Value>::iterator it = m.begin();
		for (int i = 0; it != m.end(); it++, i++)
			output[i] = it->first;
		return output;
	}
}


#endif /* map_func_hpp */
