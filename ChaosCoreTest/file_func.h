//
//  file_func.h
//  ChaosCore
//
//  Created by Fu Lam Diep on 03.08.16.
//  Copyright © 2016 Fu Lam Diep. All rights reserved.
//

#ifndef ChaosCoreTest_file_func_h
#define ChaosCoreTest_file_func_h

#include <ChaosCore/file_func.hpp>
#include <gtest/gtest.h>


TEST(file_func, Common)
{
	ASSERT_TRUE(chaos::fexists("./EmptyTestFile"));
	ASSERT_TRUE(chaos::fexists("./EmptyTestFileLink"));
	ASSERT_TRUE(chaos::fexists("./NonEmptyTestFile"));
	ASSERT_TRUE(chaos::fexists("./TestDir"));
	ASSERT_TRUE(chaos::fexists("./TestDirLink"));
	
	size_t size = chaos::fsize("./NonEmptyTestFile");
	ASSERT_GT(size, 0);
}


TEST(file_func, File)
{
	ASSERT_TRUE(chaos::is_file("./EmptyTestFile"));
	ASSERT_FALSE(chaos::is_file("./NoTestFile"));
	
	const char* content1 = chaos::fread("./NonEmptyTestFile");
	ASSERT_NE(content1, nullptr);
	
	const char* content2 = chaos::fread("./NoTestFile");
	ASSERT_EQ(content2, nullptr);
}


TEST(file_func, Dir)
{
	ASSERT_TRUE(chaos::is_dir("./TestDir"));
	ASSERT_FALSE(chaos::is_dir("./lorem"));
}

#endif /* file_func_h */
