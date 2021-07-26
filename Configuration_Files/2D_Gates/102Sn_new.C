void 102Sn_new()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 12 21:54:14 2021) by ROOT version 6.18/04
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",258,74,538,323);
   Canvas_1->Range(2.024981,49.61051,2.059836,50.91478);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TCutG *cutg = new TCutG("cID_Z1_AoQ0",11);
   cutg->SetVarX("");
   cutg->SetVarY("");
   cutg->SetTitle("Graph");
   cutg->SetFillStyle(1000);
   cutg->SetPoint(0,2.030876,50.15553);
   cutg->SetPoint(1,2.03482,50.60919);
   cutg->SetPoint(2,2.044424,50.6974);
   cutg->SetPoint(3,2.051026,50.49577);
   cutg->SetPoint(4,2.048282,50.01691);
   cutg->SetPoint(5,2.03705,49.82789);
   cutg->SetPoint(6,2.030791,50.06732);
   cutg->SetPoint(7,2.030876,50.15553);
   cutg->SetPoint(8,2.050083,50.06732);
   cutg->SetPoint(9,2.054027,50.52098);
   cutg->SetPoint(10,2.030876,50.15553);
   cutg->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4461567,0.9351869,0.5538433,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Graph");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
