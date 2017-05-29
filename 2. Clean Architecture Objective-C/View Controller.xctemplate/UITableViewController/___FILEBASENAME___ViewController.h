//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

@import UIKit;
#import "___FILEBASENAMEASIDENTIFIER___Interactor.h"
#import "___FILEBASENAMEASIDENTIFIER___Presenter.h"

@protocol ___FILEBASENAMEASIDENTIFIER___InteractorInput;
@protocol ___FILEBASENAMEASIDENTIFIER___PresenterOutput;

@class ___FILEBASENAMEASIDENTIFIER___Router;
@class ___FILEBASENAMEASIDENTIFIER___Configurator;

/**
    Class to control the table view of the scene.
 */
@interface ___FILEBASENAMEASIDENTIFIER___ViewController: UITableViewController <___FILEBASENAMEASIDENTIFIER___PresenterOutput>
@property (nonatomic, nonnull) id<___FILEBASENAMEASIDENTIFIER___InteractorInput> output;
@property (nonatomic, nonnull) ___FILEBASENAMEASIDENTIFIER___Router *router;
@property (nonatomic, nonnull) ___FILEBASENAMEASIDENTIFIER___Configurator *configurator;
@end
