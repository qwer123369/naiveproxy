/* This file contains common certificates. It's designed to be #included in
 * another file, in a namespace. */

#include "net/third_party/quiche/src/quic/core/crypto/common_cert_set_2a.inc"
#include "net/third_party/quiche/src/quic/core/crypto/common_cert_set_2b.inc"

static const size_t kNumCerts = 54;
static const unsigned char* const kCerts[] = {
  kDERCert0,
  kDERCert1,
  kDERCert2,
  kDERCert3,
  kDERCert4,
  kDERCert5,
  kDERCert6,
  kDERCert7,
  kDERCert8,
  kDERCert9,
  kDERCert10,
  kDERCert11,
  kDERCert12,
  kDERCert13,
  kDERCert14,
  kDERCert15,
  kDERCert16,
  kDERCert17,
  kDERCert18,
  kDERCert19,
  kDERCert20,
  kDERCert21,
  kDERCert22,
  kDERCert23,
  kDERCert24,
  kDERCert25,
  kDERCert26,
  kDERCert27,
  kDERCert28,
  kDERCert29,
  kDERCert30,
  kDERCert31,
  kDERCert32,
  kDERCert33,
  kDERCert34,
  kDERCert35,
  kDERCert36,
  kDERCert37,
  kDERCert38,
  kDERCert39,
  kDERCert40,
  kDERCert41,
  kDERCert42,
  kDERCert43,
  kDERCert44,
  kDERCert45,
  kDERCert46,
  kDERCert47,
  kDERCert48,
  kDERCert49,
  kDERCert50,
  kDERCert51,
  kDERCert52,
  kDERCert53,
};

static const size_t kLens[] = {
  897,
  911,
  985,
  1012,
  1049,
  1062,
  1065,
  1071,
  1084,
  1096,
  1097,
  1105,
  1107,
  1117,
  1127,
  1133,
  1136,
  1138,
  1153,
  1171,
  1172,
  1176,
  1182,
  1188,
  1194,
  1203,
  1205,
  1206,
  1210,
  1222,
  1226,
  1236,
  1236,
  1236,
  1238,
  1256,
  1270,
  1280,
  1283,
  1284,
  1287,
  1315,
  1327,
  1340,
  1418,
  1447,
  1509,
  1520,
  1570,
  1581,
  1592,
  1628,
  1632,
  1770,
};

static const uint64_t kHash = UINT64_C(0xe81a92926081e801);
