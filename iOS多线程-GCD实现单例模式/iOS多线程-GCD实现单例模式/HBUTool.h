//
//  HBUTool.h
//  iOS多线程-GCD实现单例模式
//
//  Created by William on 2018/3/18.
//  Copyright © 2018年 William. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HBUTool : NSObject<NSCopying,NSMutableCopying>

+(instancetype)shareTool;

@end
