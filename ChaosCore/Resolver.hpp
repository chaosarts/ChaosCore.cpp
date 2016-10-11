//
//  Resolver.hpp
//  ChaosCore
//
//  Created by Fu Lam Diep on 04.08.16.
//  Copyright © 2016 Fu Lam Diep. All rights reserved.
//

#ifndef ChaosCore_Resolver_hpp
#define ChaosCore_Resolver_hpp

namespace chaos
{	
	template<typename ResultType, typename ErrorType>
	class Resolver
	{
	public:
		
		template<typename R, typename E>
		class Promise;
		
		virtual void configure (Promise<ResultType, ErrorType> promise) = 0;
	};
}
#endif /* Resolver_h */
