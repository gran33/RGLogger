/*
 *  RGLogger.h
 *
 *  Created by Ran Greenberg on 7/05/14.
 *  Copyright 2010 Ran Greenberg
 *
 */

#ifndef RGLogger_RGLogger_h
#define RGLogger_RGLogger_h



/*
 *  Logging.h
 *
 *  Created by Ran Greenberg on 7/05/14.
 *  Copyright 2014 Ran Greenberg
 *
 */
/*
 Permission is hereby granted, free of charge, to any person
 obtaining a copy of this software and associated documentation
 files (the "Software"), to deal in the Software without
 restriction, including without limitation the rights to use,
 copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following
 conditions:
 
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.
 */

#ifdef DEBUG

/* Create a debug log entry in the specified format string 'f' and the subsequent arguments
 e.g. the statement:
 rglogdbg_func_argv(@"Added object named %@ after %f seconds", myobj.name, delay);
 results in a log entry:
 - [MyClass myMethod]: Added object named My Object after 5.50034 seconds
 */

#define rglogdbg_func_argv(f, ...) \
do { \
NSString *s = [NSString stringWithFormat:(f), ##__VA_ARGS__]; \
NSLog(@"%@", [NSString stringWithFormat:@"%@: %@", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], s]); \
} while (0)

// a few convenience macros to log certain variable types in a predefined format:
#define rglogdbg_func NSLog(@"%@", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding]);

#define rglogdbg_func_arg1s(arg1) NSLog(@"%@: %@", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1);

#define rglogdbg_func_arg2s(arg1, arg2) NSLog(@"%@: %@ (%@)", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1, arg2);

#define rglogdbg_func_arg1x(arg1) NSLog(@"%@: %x", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1);

#define rglogdbg_func_arg1f(arg1) NSLog(@"%@: %f", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1);
#define rglogdbg_func_argsf(arg1, arg2) NSLog(@"%@: %@ (%f)", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1, arg2);
#define rglogdbg_func_arg1u(arg1) NSLog(@"%@: %u", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1);
#define rglogdbg_rc(obj) NSLog(@"%@: %@ rc=%u", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], [[obj class] description], [obj retainCount]);


#else

#define rglogdbg_func

#define rglogdbg_func_argv(f, ...) while (0) { NSLog(f, ##__VA_ARGS__); }
#define rglogdbg_func_arg1s(arg1) while (0) NSLog(@"%@", arg1);
#define rglogdbg_func_arg2s(arg1, arg2) while (0) NSLog(@"%@%@", arg1, arg2)
#define rglogdbg_func_arg1x(arg1) while (0) NSLog(@"%x", arg1);
#define rglogdbg_func_arg1f(arg1) while (0) NSLog(@"%f", arg1);
#define rglogdbg_func_argsf(arg1, arg2) while (0) NSLog(@"%@%f", arg1, arg2);
#define rglogdbg_func_arg1u(arg1) while (0) NSLog(@"%u", arg1);
#define rglogdbg_rc(obj) while (0) NSLog(@"%@", obj);

#endif


#define rglogerr_func_argv(f, ...) \
do { \
NSString *s = [NSString stringWithFormat:(f), ##__VA_ARGS__]; \
NSLog(@"%@", [NSString stringWithFormat:@"%@ Error: %@", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], s]); \
} while (0)

#define rglogerr_func_arg1u(arg1) NSLog(@"%@ Error: %u", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1);

#define rglogerr_func_arg1s(arg1) NSLog(@"%@ Error: %@", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1);

#define rglogerr_func_arg2s(arg1, arg2) NSLog(@"%@ Error: %@ (%@)", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1, arg2);

#define rglogerr_func_arg2sd(arg1, arg2) NSLog(@"%@ Error: %@ (%d)", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1, arg2);


#define rglogwrn_func_argv(f, ...) \
do { \
NSString *s = [NSString stringWithFormat:(f), ##__VA_ARGS__]; \
NSLog(@"%@", [NSString stringWithFormat:@"%@ Warning: %@", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], s]); \
} while (0)

#define rglogwrn_func_arg1u(arg1) NSLog(@"%@ Warning: %u", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1);

#define rglogwrn_func_arg1s(arg1) NSLog(@"%@ Warning: %@", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1);

#define rglogwrn_func_arg2s(arg1, arg2) NSLog(@"%@ Warning: %@ (%@)", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1, arg2);

#define rglogwrn_func_arg2sd(arg1, arg2) NSLog(@"%@ Warning: %@ (%d)", [NSString stringWithCString:__FUNCTION__ encoding:NSASCIIStringEncoding], arg1, arg2);


#endif
