// Copyright (c) 2018-2018 Satoshi Nakamoto
// Copyright (c) 2018-2019 The 5GL developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef 5GL_INIT_H
#define 5GL_INIT_H

#include <string>

class CWallet;

namespace boost
{
class thread_group;
} // namespace boost

extern CWallet* pwalletMain;

void StartShutdown();
bool ShutdownRequested();
void Shutdown();
bool AppInit2(boost::thread_group& threadGroup);

/** The help message mode determines what help message to show */
enum HelpMessageMode {
    HMM_5GLD,
    HMM_5GL_QT
};

/** Help for options shared between UI and daemon (for -help) */
std::string HelpMessage(HelpMessageMode mode);
/** Returns licensing information (for -version) */
std::string LicenseInfo();

#endif // 5GL_INIT_H
