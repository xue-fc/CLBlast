
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xconvgemm16' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XconvgemmHalf = {
  "Xconvgemm", Precision::kHalf, {"KWID", "MDIMAD", "MDIMCD", "NDIMBD", "NDIMCD", "PADA", "PADB", "VWMD", "VWND", "WGD"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "default", {
          { kDeviceNameDefault                                        , Params{ 1, 8, 16, 16, 8, 0, 0, 1, 2, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "gfx1010:xnack-", {
          { Name{"AMD Radeon RX 5700 XT                             "}, Params{ 1, 8, 16, 16, 8, 0, 0, 1, 2, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 1, 8, 16, 16, 8, 0, 0, 1, 2, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "gfx1030", {
          { Name{"AMD Radeon RX 6800 XT                             "}, Params{ 1, 16, 16, 16, 8, 0, 0, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 1, 16, 16, 16, 8, 0, 0, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "gfx1032", {
          { Name{"AMD Radeon RX 6600 XT                             "}, Params{ 1, 8, 16, 8, 8, 0, 0, 2, 4, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 1, 8, 16, 8, 8, 0, 0, 2, 4, 32, 0, 0, 0, 0, 0, 0 } },
        } },
        { "gfx1035", {
          { Name{"AMD Radeon Graphics                               "}, Params{ 1, 8, 16, 16, 8, 0, 0, 2, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 1, 8, 16, 16, 8, 0, 0, 2, 1, 32, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "default", {
          { Name{"Intel(R) HD Graphics Skylake ULT GT2              "}, Params{ 1, 8, 16, 16, 8, 0, 0, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) UHD Graphics 620                         "}, Params{ 1, 8, 8, 8, 16, 0, 0, 4, 1, 32, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 1, 8, 8, 8, 16, 0, 0, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { kDeviceNameDefault                                        , Params{ 1, 8, 8, 8, 16, 0, 0, 1, 1, 32, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
