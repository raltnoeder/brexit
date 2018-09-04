/**
 * BREXIT - End your program with style
 * Based on a true story
 *
 * (C) Copyright 2018 by Robert Altnoeder (r.altnoeder@gmx.net)
 *
 * DO WHAT THE FUCK YOU WANT TO BUT IT'S NOT MY FAULT PUBLIC LICENSE
 *                     Version 1, October 2013
 *
 *  Copyright (C) 2013 Ben McGinnes <ben@adversary.org>
 *
 * Everyone is permitted to copy and distribute verbatim or modified
 * copies of this license document, and changing it is allowed as long
 * as the name is changed.
 *
 *    DO WHAT THE FUCK YOU WANT TO BUT IT'S NOT MY FAULT PUBLIC LICENSE
 *    TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
 *
 *   0. You just DO WHAT THE FUCK YOU WANT TO.
 *
 *   1. Do not hold the author(s), creator(s), developer(s) or
 *      distributor(s) liable for anything that happens or goes wrong
 *      with your use of the work.
 */

#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

#include <brexit.h>

static void brexit_signal(const int signal_id);

void brexit(const brexit_method method)
{
    switch (method)
    {
        case WHAT_COULD_POSSIBLY_GO_WRONG:
        {
            int fubar = *((int *) NULL);
            // This shit just hit the fan, but just in case that whatever
            // problem it caused was handled somehow, call abort() if
            // this point is reached
            // Also, use the fubar variable to avoid compile warnings/errors
            // due to an unused variable
            if (fubar == 0)
            {
                abort();
            }
            else
            {
                abort();
            }
            break;
        }
        case ACTUALLY_LETS_JUST_CHICKEN_OUT:
        {
            brexit_signal(SIGSTOP);
            break;
        }
        case HOLD_MY_BEER_AND_WATCH_THIS:
        {
            brexit_signal(SIGKILL);
            break;
        }
        case BECAUSE_I_CAN:
        // fall-through
        default:
        {
            abort();
            break;
        }
    }
}

static void brexit_signal(const int signal_id)
{
    const pid_t this_process = getpid();
    kill(this_process, signal_id);
}
