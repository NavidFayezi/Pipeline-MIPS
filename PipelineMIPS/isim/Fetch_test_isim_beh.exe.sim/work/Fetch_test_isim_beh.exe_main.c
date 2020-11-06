/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000775322651_3631796253_init();
    work_m_00000000004096790147_1733832700_init();
    work_m_00000000004060479182_2032185554_init();
    work_m_00000000002628495417_2386836622_init();
    work_m_00000000002660737291_2565239433_init();
    work_m_00000000003621715106_2817105642_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003621715106_2817105642");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
