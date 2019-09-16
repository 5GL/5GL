// Copyright (c) 2018-2018 Satoshi Nakamoto
// Copyright (c) 2018-2019 The 5GL developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef 5GL_ECCRYPTOVERIFY_H
#define 5GL_ECCRYPTOVERIFY_H

#include <vector>
#include <cstdlib>

class uint256;

namespace eccrypto {

bool Check(const unsigned char *vch);
bool CheckSignatureElement(const unsigned char *vch, int len, bool half);

} // eccrypto namespace

#endif // 5GL_ECCRYPTOVERIFY_H
