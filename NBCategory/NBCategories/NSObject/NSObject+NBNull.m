//
//  NSObject+NBNull.m
//  NBCategory
//
//  Created by NapoleonBai on 16/10/20.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import "NSObject+NBNull.h"

@implementation NSObject (NBNull)

-(BOOL)isEmpty
{
    // 判断是否为空对象
    if (self == nil || [self isEqual:[NSNull null]] || [self isKindOfClass:[NSNull class]]) {
        return YES;
    }
    
    if ([self isKindOfClass:[NSString class]]) {
        NSString *object = (NSString *)self;
        //whitespaceAndNewlineCharacterSet 换行符和空字符   只去除空字符whitespaceCharacterSet
        if ([[object stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] length] == 0) {
            return YES;
        }
        return NO;
    }
    return NO;
}

    
    @end
