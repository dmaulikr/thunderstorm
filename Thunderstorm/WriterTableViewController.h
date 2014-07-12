//
//  WriterTableViewController.h
//  Thunderstorm
//
//  Created by Darshan Shankar on 6/22/14.
//  Copyright (c) 2014 Darshan Shankar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WriterTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, UIScrollViewDelegate, UIAlertViewDelegate>

@property (nonatomic, retain) NSMutableArray *tweetData;
@property (nonatomic, retain) NSMutableArray *tweetNumberOfLines;
@property (nonatomic, strong) UITableView *tableView;

@end
