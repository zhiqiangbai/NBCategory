//
//  NSObject+NBNull.h
//  NBCategory
//
//  Created by NapoleonBai on 16/10/20.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 *  主要提供判断对象是否为空的方法
 *  @see isEmpty
 */
@interface NSObject (NBNull)
/**
 *  当前对象是否为空
 *
 *  @return YES or NO
 */
-(BOOL)isEmpty;

@end
