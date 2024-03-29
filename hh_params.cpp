#include "hh_params.h"

void hh_args_init(t_hh_params &hh_args)
{
    //reset PE-sieve params:
    memset(&hh_args.pesieve_args, 0, sizeof(pesieve::t_params));

    //reset output path:
    hh_args.out_dir = HH_DEFAULT_DIR;

    hh_args.pesieve_args.quiet = true;
    hh_args.pesieve_args.no_hooks = true;

    hh_args.suspend_suspicious = false;
    hh_args.kill_suspicious = false;
    hh_args.loop_scanning = false;
    hh_args.etw_scan = false;
    hh_args.unique_dir = false;

    hh_args.quiet = false;
    hh_args.log = false;
    hh_args.json_output = false;
    hh_args.ptimes = TIME_UNDEFINED;
}
