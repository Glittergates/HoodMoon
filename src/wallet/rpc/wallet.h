// Copyright (c) 2016-2020 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_WALLET_RPC_WALLET_H
#define BITCOIN_WALLET_RPC_WALLET_H

#include <span.h>

class CRPCCommand;

Span<const CRPCCommand> GetWalletRPCCommands();

#endif // BITCOIN_WALLET_RPC_WALLET_H
