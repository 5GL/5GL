/**********************************************************************
 * Copyright (c) 2018, 2019 Pieter Wuille                             *
 * Distributed under the MIT software license, see the accompanying   *
 * file COPYING or http://www.opensource.org/licenses/mit-license.php.*
 **********************************************************************/

#ifndef _SECP256K1_ECKEY_
#define _SECP256K1_ECKEY_

#include "group.h"
#include "scalar.h"

static int secp256k1_eckey_pubkey_parse(secp256k1_ge_t *elem, const unsigned char *pub, int size);
static int secp256k1_eckey_pubkey_serialize(secp256k1_ge_t *elem, unsigned char *pub, int *size, int compressed);

static int secp256k1_eckey_privkey_parse(secp256k1_scalar_t *key, const unsigned char *privkey, int privkeylen);
static int secp256k1_eckey_privkey_serialize(unsigned char *privkey, int *privkeylen, const secp256k1_scalar_t *key, int compressed);

static int secp256k1_eckey_privkey_tweak_add(secp256k1_scalar_t *key, const secp256k1_scalar_t *tweak);
static int secp256k1_eckey_pubkey_tweak_add(secp256k1_ge_t *key, const secp256k1_scalar_t *tweak);
static int secp256k1_eckey_privkey_tweak_mul(secp256k1_scalar_t *key, const secp256k1_scalar_t *tweak);
static int secp256k1_eckey_pubkey_tweak_mul(secp256k1_ge_t *key, const secp256k1_scalar_t *tweak);

#endif
