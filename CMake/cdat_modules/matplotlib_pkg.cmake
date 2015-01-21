set( MATPLOTLIB_MAJOR_MIN 1  )
set( MATPLOTLIB_MINOR_MIN 1  )
set( MATPLOTLIB_PATCH_MIN 0  )
set( MATPLOTLIB_MAJOR 1  )
set( MATPLOTLIB_MINOR 4  )
set( MATPLOTLIB_PATCH 2  )
set( MATPLOTLIB_VERSION ${MATPLOTLIB_MAJOR}.${MATPLOTLIB_MINOR}.${MATPLOTLIB_PATCH} )
set( MATPLOTLIB_URL ${LLNL_URL} )
set( MATPLOTLIB_GZ matplotlib-${MATPLOTLIB_VERSION}.tar.gz )
set( MATPLOTLIB_MD5 7d22efb6cce475025733c50487bd8898)

set (nm MATPLOTLIB)
string(TOUPPER ${nm} uc_nm)
set(${uc_nm}_VERSION ${${nm}_MAJOR}.${${nm}_MINOR}.${${nm}_PATCH})
set(MATPLOTLIB_SOURCE ${MATPLOTLIB_URL}/${MATPLOTLIB_GZ})

add_cdat_package_dependent(Matplotlib "" "" OFF "CDAT_BUILD_GRAPHICS" OFF)
