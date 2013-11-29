set(NC4PLUS_MAJOR_SRC 4)
set(NC4PLUS_MINOR_SRC 2)
set(NC4PLUS_PATCH_SRC 1.1)
set(NC4PLUS_URL ${LLNL_URL})
set(NC4PLUS_GZ netcdf-cxx-${NC4PLUS_MAJOR_SRC}.${NC4PLUS_MINOR_SRC}.tar.gz)
set(NC4PLUS_MD5 0b09655cf977d768ced6c0d327dde176)

set (nm NC4PLUS)
string(TOUPPER ${nm} uc_nm)
set(${uc_nm}_VERSION ${${nm}_MAJOR_SRC}.${${nm}_MINOR_SRC}.${${nm}_PATCH_SRC})
set(NETCDFPLUS_VERSION ${NC4PLUS_VERSION})
set(NETCDFPLUS_SOURCE ${NC4PLUS_URL}/${NC4PLUS_GZ})
set(NETCDFPLUS_MD5 ${NC4PLUS_MD5})

add_cdat_package_dependent(NetCDFPLUS "" "" ON "CDAT_BUILD_GUI" OFF)