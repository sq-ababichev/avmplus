// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Small modifications to make separable from chromium/base -- stan 12/10/2012

#ifndef BASE_SHA1_H_
#define BASE_SHA1_H_

#include <string>

namespace base {

// This function performs SHA-1 operations.

enum {
  SHA1_LENGTH = 20  // Length in bytes of a SHA-1 hash.
};

// Computes the SHA-1 hash of the input string |str| and returns the full
// hash.
std::string SHA1HashString(const std::string& str);

// Computes the SHA-1 hash of the |len| bytes in |data| and puts the hash
// in |hash|. |hash| must be SHA1_LENGTH bytes long.
void SHA1HashBytes(const unsigned char* data, size_t len,
                            unsigned char* hash);

}  // namespace base

#endif  // BASE_SHA1_H_
