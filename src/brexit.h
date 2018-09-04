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

#ifndef BREXIT_H
#define	BREXIT_H

typedef enum
{
    BECAUSE_I_CAN                   = 0,
    WHAT_COULD_POSSIBLY_GO_WRONG    = 1,
    ACTUALLY_LETS_JUST_CHICKEN_OUT  = 2,
    HOLD_MY_BEER_AND_WATCH_THIS     = 3
}
brexit_method;

/**
 * End the program BREXIT-style, aka a total train wreck
 *
 * The brexit() is performed using the method selected by the
 * value of the parameter method:
 *     BECAUSE_I_CAN
 *         Calls abort(), but looks way cooler than just calling abort() directly.
 *         This is also the default if the parameter method is set to an invalid value.
 *     WHAT_COULD_POSSIBLY_GO_WRONG
 *         Causes an integer read from memory address 0, thereby most probably
 *         crashing the program; but just in case that it survives, goes on
 *         to attempt calling abort().
 *     ACTUALLY_LETS_JUST_CHICKEN_OUT
 *         Sends a SIGSTOP signal to the current process instead of actually terminating it,
 *         just as the name suggests.
 *     HOLD_MY_BEER_AND_WATCH_THIS
 *         Performs a kamikaze stunt by sending a SIGKILL signal to the current process
 *         to live up to the high standard usually expected after these words are heard.
 *
 * @param method Specifies the method to use for program termination
 */
void brexit(brexit_method method);

#endif // BREXIT_H
