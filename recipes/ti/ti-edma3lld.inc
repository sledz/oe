DESCRIPTION = "TI DSP/BIOS for Davinci and OMAP processor"

TI_BIN_UNPK_CMDS="Y:workdir"

require ti-eula-unpack.inc

PE = "1"

require ti-paths.inc
require ti-staging.inc

SRC_URI = "http://software-dl.ti.com/dsps/dsps_public_sw/sdo_sb/targetcontent/edma3_lld/edma3-lld-bios5/${PV}/exports/EDMA3_LLD_setuplinux_${PV}.bin;name=edma3lldbin"

BINFILE="EDMA3_LLD_setuplinux_${PV}.bin"

S = "${WORKDIR}/edma3_lld_${PV}"

do_install() {
    install -d ${D}${EDMA3_LLD_INSTALL_DIR_RECIPE}
    cp -pPrf ${S}/* ${D}${EDMA3_LLD_INSTALL_DIR_RECIPE}
}

