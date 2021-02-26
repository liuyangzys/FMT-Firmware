/******************************************************************************
 * Copyright 2020 The Firmament Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include <firmament.h>

#include "module/syscmd/syscmd.h"
#include "task_logger.h"

static void _show_blog_status(void)
{
    if (blog_get_status() == BLOG_STATUS_IDLE) {
        console_printf("no working log file.\n");
        return;
    }

    console_printf("log file: %s\n", blog_get_logging_file_name());
    blog_show_status();
}

static void show_usage(void)
{
}

static int handle_cmd(int argc, char** argv, int optc, optv_t* optv)
{
    if (argc < 2) {
        show_usage();
        return 0;
    }

    for (uint16_t i = 0; i < optc; i++) {

        if (STRING_COMPARE(optv[i].opt, "-m") || STRING_COMPARE(optv[i].opt, "--msg")) {
            blog_add_desc(optv[i].val);
        }
    }

    if (strcmp(argv[1], "start") == 0) {
        if (argc >= 3) {
            logger_start_blog(argv[2]);
        } else {
            logger_start_blog(NULL);
        }
    } else if (strcmp(argv[1], "stop") == 0) {
        logger_stop_blog();
    } else if (strcmp(argv[1], "status") == 0) {
        _show_blog_status();
    }else if (strcmp(argv[1], "ws") == 0) {
        char path[100];
        get_working_log_session(path);
        console_printf("working log session: %s\n", path);
    } else {
        show_usage();
    }

    return 0;
}

int cmd_blog(int argc, char** argv)
{
    return syscmd_process(argc, argv, handle_cmd);
}
FINSH_FUNCTION_EXPORT_ALIAS(cmd_blog, __cmd_blog, Blog operations);