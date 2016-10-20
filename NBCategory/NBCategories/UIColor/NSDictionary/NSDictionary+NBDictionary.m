//
//  NSDictionary+NBDictionary.m
//  NAPOLEONBAI INTEGRATED BASE PROJECT
//
//  Created by NapoleonBai on 15/5/11.
//  Copyright (c) 2015年 NapoleonBai. All rights reserved.
//

#import "NSDictionary+NBDictionary.h"

@implementation NSDictionary (NBDictionary)

- (id)objectForKeyNotNull:(id)key
{
    id object = [self objectForKey:key];
    if (object == [NSNull null])
    {
        return nil;
    }
    return object;
}

@end
