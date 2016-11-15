//
//  HashTagModel.h
//  MarkDemo_JamesKuo
//
//  Created by waninuser on 2016/11/4.
//  Copyright © 2016年 waninuser. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol HashTagModelDelegate <NSObject>

-(void)hasfindHashTag;

@end


@interface HashTagModel : NSObject

@property id<HashTagModelDelegate> delegate;
@property NSString *replaced;

-(void)analyzeText:(NSString*)input change:(NSString*)replacestr;
-(NSArray*)getResult;

@end

