#ifndef DISSENT_TEST_H_GUARD
#define DISSENT_TEST_H_GUARD

#include <qapplication.h>

#include <gtest/gtest.h>

#include "Dissent.hpp"
#include "Mock.hpp"
#include "RpcTest.hpp"

void NoOutputHandler(QtMsgType, const char *);
void DisableLogging();
void EnableLogging();

#endif