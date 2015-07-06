//
//  ToDoItem.h
//  ToDoList
//
//  Created by 赖显波 on 7/6/15.
//  Copyright (c) 2015 赖显波. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;

@property BOOL completed;

@property(readonly) NSDate *creationDate;

@end
