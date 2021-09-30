import { CurrencyPipe } from '@angular/common';
import { Component } from '@angular/core';

import { stationList } from './station-list.const';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {

  list = stationList;
  today = new Date();
  amount: number = 259;
}

